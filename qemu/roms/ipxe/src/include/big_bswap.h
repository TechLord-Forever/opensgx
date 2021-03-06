#ifndef ETHERBOOT_BIG_BSWAP_H
#define ETHERBOOT_BIG_BSWAP_H

#define htonll(x)	(x)
#define ntohll(x)	(x)
#define ntohl(x) 	(x)
#define htonl(x) 	(x)
#define ntohs(x) 	(x)
#define htons(x) 	(x)
#define cpu_to_le64(x)	__bswap_64(x)
#define cpu_to_le32(x)	__bswap_32(x)
#define cpu_to_le16(x)	__bswap_16(x)
#define cpu_to_be64(x)	(x)
#define cpu_to_be32(x)	(x)
#define cpu_to_be16(x)	(x)
#define le64_to_cpu(x)	__bswap_64(x)
#define le32_to_cpu(x)	__bswap_32(x)
#define le16_to_cpu(x)	__bswap_16(x)
#define be64_to_cpu(x)	(x)
#define be32_to_cpu(x)	(x)
#define be16_to_cpu(x)	(x)
#define cpu_to_le64s(x) __bswap_64s(x)
#define cpu_to_le32s(x) __bswap_32s(x)
#define cpu_to_le16s(x) __bswap_16s(x)
#define cpu_to_be64s(x) do {} while (0)
#define cpu_to_be32s(x) do {} while (0)
#define cpu_to_be16s(x) do {} while (0)
#define le64_to_cpus(x) __bswap_64s(x)
#define le32_to_cpus(x) __bswap_32s(x)
#define le16_to_cpus(x) __bswap_16s(x)
#define be64_to_cpus(x) do {} while (0)
#define be32_to_cpus(x) do {} while (0)
#define be16_to_cpus(x) do {} while (0)

#endif /* ETHERBOOT_BIG_BSWAP_H */
