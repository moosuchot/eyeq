
#include "tx.h"

int iso_rx_init(void);
void iso_rx_exit(void);
unsigned int iso_rx_bridge(unsigned int hooknum,
						   struct sk_buff *skb,
						   const struct net_device *in,
						   const struct net_device *out,
						   int (*okfn)(struct sk_buff *));

inline iso_class_t iso_rx_classify(struct sk_buff *);

#if defined ISO_TX_CLASS_DEV
int iso_vq_dev_install(char *);
#elif defined ISO_TX_CLASS_ETHER_SRC
int iso_vq_ether_src_install(char *);
#endif

/* Local Variables: */
/* indent-tabs-mode:t */
/* End: */

