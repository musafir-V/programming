const ll MAX_PR = (ll)5e6 + 3;
bitset<MAX_PR> isprime;
vll eratosthenesSieve(ll lim) {
    isprime.set();isprime[0]=isprime[1]=0;
    for(ll i=4;i<lim;i+=2) isprime[i]=0;
    for(ll i=3;i*i<lim;i++)  if(isprime[i])
        for(ll j=i*i;j<lim;j+=i*2) isprime[j]=0;
    vll pr; for(ll i=0;i<lim;++i) if(isprime[i]) pr.pb(i);                
    return pr;
}
