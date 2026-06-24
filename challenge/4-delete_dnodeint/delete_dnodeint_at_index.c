int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int p;

	if (head == NULL || *head == NULL)
		return (-1);

	saved_head = *head;

	for (p = 0; p < index && *head != NULL; p++)
		*head = (*head)->next;

	if (*head == NULL)
	{
		*head = saved_head;
		return (-1);
	}

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;

		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp = *head;

		tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;

		free(tmp);

		*head = saved_head;
	}

	return (1);
}