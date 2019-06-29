#include <stdio.h>
#include <dtl/dtl.hpp>

int main()
{
	std::string A("kitten");
	std::string B("sitting");
	dtl::Diff<char, std::string> d(A, B);
	d.compose();
	auto const &sq = d.getSes().getSequence();
	for (std::pair<char, dtl::elemInfo> const &t : sq) {
		switch (t.second.type) {
		case dtl::SES_COMMON:
			putchar(' ');
			break;
		case dtl::SES_ADD:
			putchar('+');
			break;
		case dtl::SES_DELETE:
			putchar('-');
			break;
		}
		putchar(t.first);
		putchar('\n');
	}
}
