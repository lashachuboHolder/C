int main()
{
 some_object * p, *q;
  p = NULL;	// pointing to “nowhere”  
  size_t zoma = sizeof(some_object);

  q = malloc(zoma); q->next = p; q->val =  2; p = q;
  q = malloc(zoma); q->next = p; q->val = -3; p = q;
  q = malloc(zoma); q->next = p; q->val =  7; p = q;
  for ( ; p!= NULL; ) { printf("%d; ", p->val );  p = p->next; }
}