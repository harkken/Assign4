#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int magic_number_1[] = {186, 94, 186, 17};
int magic_number_2[] = {186, 94, 186, 18};
int word_length = 0;
int word_count = 0;


typedef struct node{
	char *word;
	struct node * next;

}node;


/*
 * The encode() function may remain unchanged for A#4.
 */
int encode(FILE *input, FILE *output) {
    return 0;
}
/*
* 	check_magic_num(input): Check first four characters against accepted values. 
*/
int check_magic_num(FILE *input){
	int c;    
    for(int i = 0; i < 4; i++){
        c = fgetc(input);
		// had a typo here where I had magic number2 twice instead of magicnumber1
        if(  (c != magic_number_1[i]) && (c != magic_number_2[i])     ){ 
            printf("Error: File does not contain magic number\n");
			return 1;
        }
    
    }
     
	
    return 0;
}
/*
*	print_all_characters(input): Print all of the characters from the input file.
*/
void print_all_characters(FILE * INPUT){
	int c;
	c = fgetc(INPUT);
	while(c != EOF){
		printf("%d\n", c);
		c = fgetc(INPUT);
    }
	
}
/*
* return_number_type(char): Specifies the word number.
* 	Case 1: char - 128 0->120
*	Case 2: 249-128    121->375
*	Case 3: 250-128    376->65912
*/ 	
int return_number_type(int ch){
	switch(ch){
		case 249:
			return 2;

		case 250:
			return 3;

		default:
			return 1;

	}
} 


void main_loop(FILE * INPUT, FILE * OUTPUT){
	int c; 			 		 // character read from file
	char * new_word; 		 // pointer to an array to store the word
	int returned_number = 0; // number returned from switch statement
	int letter_count = 0;    // counts the letters read into the array
	c = fgetc(INPUT);
	node * head = NULL;     // head of list 
	while(c != EOF){
	//Testing for characters
		if (c > 32 && c < 128){
			printf("Letter: %c\n", c);
			new_word = allocate_word_memory(); // allocate memory for word
			
			while( c > 32 && c < 128){
				//add letters to word array that has been created 
			}
			//ADD COMPARE FUNCTION THEN NEXT LINE
			//new_node = create_node(new_word);
			if(compare_word(new_word) == 1){
				node * new_node;
				new_node = create_node(new_word); 
			}
			else{
			// do not add word to list
			} 
			if(head == NULL){   
				head = new_node;
			}
			//
		}
		if(c == 10){ //if char is a newline
			fputc(10, OUTPUT);
		}
	 
		if(c > 128){
			c = c-128;   //just helps us determine the first character I believe
			returned_number = return_number_type(c);
			printf("Return type: %d\n", returned_number);
			printf("Number: %d\n", c);
		}
		c = fgetc(INPUT);
    }
	
}
/*
*	allocate_word_memory(): Calls malloc to allocate space for the word
*/
char * allocate_word_memory(){
	char * word_ptr = (char *)malloc(sizeof(char));
	return word_ptr;	
}
/*
*	test_word_array_length(): Tests to see if array has reached max capacity yet. 
*/
void test_word_array_length(int letter_count){
	if(letter_count
}
/*
* 	reallocate_memory(): If word array is at max capacity, reallocates memory to larger array.
*/
void reallocate_memory(){

}

/*
*	compare_word(): Once all the letters have been added to the word array, compare the word to all the other words currently in the list.
*					If there is a match the word does not need to be created and a node doesn't need to be allocated.
*/
int compare_word(){
	//if match return 0, if not match return 1
}
/*
*	create_node(word): Creates a new node to add to the linked list
*/
node * create_node(char * word){
	node * node_p;
	node_p = (node*)malloc(sizeof(node));
	if(node_p == NULL){
		printf("malloc of node creation failed");
		exit(1);
	}	
	word_count++;
	
	if(start == NULL){
		start = node_p;
		start->
	}	

}
void add_to_list(char * HEAD, char * node){
	char * p; 			
	if(HEAD == NULL){
		HEAD = node;
	}
	else{
		p = HEAD;
		while(p != NULL){
			p = p->next;	
		}
		p->next = node;
	}
}
int decode(FILE *input, FILE *output) {
	check_magic_num(input);
	main_loop(input, output);	
	return 0;   
} 

