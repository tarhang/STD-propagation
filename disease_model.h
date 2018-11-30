// disease_model.h
// implemented by Farhang Tarlan - winter 2013

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include<math.h>
#include<limits.h>

struct graph{
	int n;
};

struct person{
	int id;
	char status;
};


// Lab 9 methods
struct graph* read_file(char* filename);
void print_stats(struct graph *pop);
void print_graph(struct graph *pop);
void seed_graph(struct graph **pop, int person_id);
void propagate_once(struct graph **pop, double p_transmit);
void propagate_n_times(struct graph **pop, int n, double p_transmit);
void remove_all(struct graph **pop);

// Lab 10 methods
void print_graph_alt(struct graph *pop);
void propagate_with_recovery(struct graph **pop, int n, double p_transmit, int time_to_recover);
void propagate_with_death(struct graph **pop, int n, double p_transmit, int time_to_death);
void vaccinate_person(struct graph *pop, int person_id);
void vaccinate_n_people(struct graph *pop, int n); 
int vaccinate_randomly(struct graph *pop); 
int vaccinate_minimal(struct graph *pop); 
int has_herd_immunity(struct graph *pop);

void shuffle(int *array, int size);
