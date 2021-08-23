stack<pair<int,int> >s;

MinStack::MinStack() {
    while(s.size()>0){s.pop();}
}

void MinStack::push(int x) {
    if(s.size()==0){s.push({x,x});}
    else{
        s.push({x,min(x,s.top().second)});
    }
}

void MinStack::pop() {
    if(s.size()>0){s.pop();}
}

int MinStack::top() {
    if(s.size()==0){return -1;}
    return s.top().first;
}

int MinStack::getMin() {
    if(s.size()==0){return -1;}
    return s.top().second;
}
