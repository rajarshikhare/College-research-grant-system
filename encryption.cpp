
class encryption{
    public:
        static string encrypt(string s){
            int i;
            int l = s.length();
            for(i = 0;i < l; i++){
                s[i] = s[i] + l;
            }
            return s;
        }

        static string decrypt(string s){
            int i;
            int l = s.length();
            for(i = 0;i < l; i++){
                s[i] = s[i] - l;
            }
            return s;
        }
};
