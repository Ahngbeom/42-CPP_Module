/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:51:45 by bahn              #+#    #+#             */
/*   Updated: 2022/02/11 22:32:09 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Constructor called" << std::endl;

	std::string	idea_list[100] = { 
		"abstraction", "cogitation", "concept", "conception", "image", \
		"impression", "intellection", "mind's eye", "notion", "picture", \
		"thought", "apprehension", "premonition", "presentiment", "preconception", \
		"prejudice", "prepossession", "chimera", "delusion", "hallucination", \
		"illusion", "phantasm", "caprice", "conceit", "fancy", \
		"freak", "kink", "vagary", "whim", "cognition", \
		"observation", "perception", "reflection", "assumption", "belief", \
		"conclusion", "conviction", "conjecture", "guess", "hunch", \
		"hypothesis", "speculation", "supposition", "surmise", "theory", \
		"brainchild", "brainstorm", "brain wave", "inspiration", "actuality", \
		"fact", "reality", "beau ideal", "classic", "eidolon", \
		"exemplar", "ideal", "model", "nonesuch", "nonpareil", \
		"paragon", "patron saint", "role model", "embodiment", "epitome", \
		"incarnation", "manifestation", "personification", "phantom", "pink", \
		"archetype", "example", "mirror", "paradigm", "pattern", \
		"guideline", "principle", "rule", "gauge", "standard", \
		"touchstone", "essence", "quintessence", "acme", "apex", \
		"apotheosis", "culmination", "peak", "pinnacle", "summit", \
		"zenith", "aim", "ambition", "aspiration", "bourne", \
		"design", "dream", "end", "goal", "ideal"
	};
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = idea_list[i];
	}
}

Brain::~Brain()
{
	std::cout << "[Brain] Deconstructor called" << std::endl;
}

std::string	Brain::comeToIdea(const int& index) const {
	return (ideas[index]);
}
