#ifndef SCRAPER_H
#define SCRAPER_H

#include <unordered_set>
#include <string>

std::unordered_set<std::string> findWikiLinks(const std::string& page_html);

#endif