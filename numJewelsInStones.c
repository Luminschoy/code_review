int numJewelsInStones(char* J, char* S) {   
    int find_count =0;
    size_t S_len = strlen(S);
    size_t J_len = strlen(J);
    for(int i =0; i < S_len; i++){
        for(int j_index =0;j_index <J_len;j_index++)
            {
             if(S[i] == J[j_index])
                find_count++;              
             }
    }    
    return find_count;    
}
