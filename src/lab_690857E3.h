/**
 * Copy a string to the target buffer
 * 
 * @param psource : pointer to the string
 * @param ptarget : pointer to the buffer
 * @param num_char : number of characters copied
 * @return void
 */
void copy(char *psource, char *ptarget, unsigned num_char);

/**
 * Concatenates at most ```num_char``` characters from 2 strings 
 * The result is stored in the buffer
 * 
 * @param psrc1 : pointer to the 1st string
 * @param psrc2 : pointer to the 2nd string
 * @param ptarget : pointer to the buffer
 * @param buffer_size : size of the buffer
 * @return void
 */
void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size);