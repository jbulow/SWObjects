/* WEButil - simple utils e.g. base64 {en,de}coding

 * $Id: WEButil.hpp,v 1.5 2008-10-14 12:02:57 eric Exp $
 */

#ifndef INCLUDED_interface_WEButil_hpp
 #define INCLUDED_interface_WEButil_hpp

namespace w3c_sw {

    namespace web_util {

	/** base64 encode and decode functions
	 * from <http://www.adp-gmbh.ch/cpp/common/base64.html>
	 */

	inline std::string base64_encode (std::string encodeMe) {
	    static const std::string base64_chars = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789+/";

	    char const* bytes_to_encode = &encodeMe[0];
	    unsigned int in_len = encodeMe.size();

	    std::string ret;
	    int i = 0;
	    int j = 0;
	    unsigned char char_array_3[3];
	    unsigned char char_array_4[4];

	    while (in_len--) {
		char_array_3[i++] = *(bytes_to_encode++);
		if (i == 3) {
		    char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
		    char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
		    char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
		    char_array_4[3] = char_array_3[2] & 0x3f;

		    for(i = 0; (i <4) ; i++)
			ret += base64_chars[char_array_4[i]];
		    i = 0;
		}
	    }

	    if (i)
		{
		    for(j = i; j < 3; j++)
			char_array_3[j] = '\0';

		    char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
		    char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
		    char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
		    char_array_4[3] = char_array_3[2] & 0x3f;

		    for (j = 0; (j < i + 1); j++)
			ret += base64_chars[char_array_4[j]];

		    while((i++ < 3))
			ret += '=';

		}

	    return ret;
	}

	static inline bool is_base64 (unsigned char c) {
	    return (isalnum(c) || (c == '+') || (c == '/'));
	}

	inline std::string base64_decode(std::string const& encoded_string) {
	    // http://www.adp-gmbh.ch/cpp/common/base64.html
	    static const std::string base64_chars = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789+/";
	    int in_len = encoded_string.size();
	    int i = 0;
	    int j = 0;
	    int in_ = 0;
	    unsigned char char_array_4[4], char_array_3[3];
	    std::string ret;

	    while (in_len-- && ( encoded_string[in_] != '=') && is_base64(encoded_string[in_])) {
		char_array_4[i++] = encoded_string[in_]; in_++;
		if (i ==4) {
		    for (i = 0; i <4; i++)
			char_array_4[i] = base64_chars.find(char_array_4[i]);

		    char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
		    char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
		    char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

		    for (i = 0; (i < 3); i++)
			ret += char_array_3[i];
		    i = 0;
		}
	    }

	    if (i) {
		for (j = i; j <4; j++)
		    char_array_4[j] = 0;

		for (j = 0; j <4; j++)
		    char_array_4[j] = base64_chars.find(char_array_4[j]);

		char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
		char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
		char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

		for (j = 0; (j < i - 1); j++) ret += char_array_3[j];
	    }

	    return ret;
	}

	struct header
	{
	    std::string name;
	    std::string value;
	    header () {  }
	    header (std::string name, std::string value) : name(name), value(value) {  }
	    std::string str () const {
		return name + ": " + value;
	    }
	};

	inline std::ostream& operator<< (std::ostream& os, const header& h) {
	    return os << h.str();
	}

	struct headerset : std::vector<header> {
	    std::pair<bool, std::string> findOne (std::string header) {
		for (const_iterator it = begin(); it != end(); ++it)
		    if (it->name == header)
			return std::make_pair(true, it->value);
		return std::make_pair(false, "");
	    }
	};

    } // namespace web_util

} // namespace w3c_sw

#endif /* !INCLUDED_interface_WEButil_hpp */
