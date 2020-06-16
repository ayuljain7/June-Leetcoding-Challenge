class Solution {
public:
    bool CheckforIPv4(string IP)
    {
        int count =0,j=0;
        while(j<IP.size())
        {
            count++;
            string val;
            while(j<IP.size() && IP[j]!='.')
            {
                cout<<IP[j]<<" ";
                if(int(IP[j])>int('9') || int(IP[j])<int('0'))
                {
                    return false;
                }
                else
                {
                   val=val+IP[j];
                }
                j++;
            }
            if(val.size()==0 || val.size()>3 || stoi(val)>255 || (val.size()!=1 && val[0]=='0'))
            {
                return false;
            }
            if(j==IP.size()-1 && IP[j]=='.')
            {
                return false;
            }
            j++;
        }
        if(count!=4)
        {
            return false;
        }
        return true;
    }
    bool CheckforIPv6(string IP)
    {
        int count =0,j=0;
        while(j<IP.size())
        {
            count++;
            string val;
            while(j<IP.size() && IP[j]!=':')
            {
                if((int(IP[j])<=int('9') && int(IP[j])>=int('0') )|| (int(IP[j])<int('g') &&                                        int(IP[j])>=int('a'))|| (int(IP[j])<int('G') && int(IP[j])>=int('A')))
                {
                    val=val+IP[j];
                }
                else
                {
                   return false;
                }
                j++;
            }  
            if(val.size()==0 || val.size()>4 )
            {
                return false;
            }
            if(j==IP.size()-1 && IP[j]==':')
            {
                return false;
            }
            j++;
        }
        cout<<count<<" ";
        if(count!=8)
        {
            return false;
        }
        return true;
        
    }
    string validIPAddress(string IP) {
        int i=0;
        while(i<IP.size() && IP[i]!='.')
        {
            i++;
        }
        if(i<IP.size())
        {
            if(CheckforIPv4(IP)==true)
            {
                cout<<" here ";
                return "IPv4";
            }
            else
            {
                return "Neither";
            }
        }
        i=0;
        while(i<IP.size() && IP[i]!=':')
        {
            i++;
        }
        if(i<IP.size())
        {
            if(CheckforIPv6(IP))
            {
                return "IPv6";
            }
            else
            {
                return "Neither";
            }
        }
        return "Neither";
    }
};