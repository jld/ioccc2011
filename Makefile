$(ENTRY): $(ENTRY).c
	$(CC) $(CFLAGS) $(ENTRY).c -o $(ENTRY)
