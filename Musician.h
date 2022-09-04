class Musician
{
public:
    Musician() {}
    virtual ~Musician() = 0;

public:
    virtual void play() = 0;
    virtual void listen(Musician &) = 0;
    virtual bool isPlaying() = 0;
};
Musician::~Musician() { std::cout << "Musician Dtor! " << std::endl; }
class Saxophonist : public Musician
{
public:
    Saxophonist()
    {
        std::cout << "Saxophonist Ctor! " << std::endl;
    }
    ~Saxophonist()
    {
        std::cout << "Saxophonist Dtor!" << std::endl;
    }

public:
    void play() override
    {
        std::cout << "Saxophonist play! " << std::endl;
    }
    bool isPlaying() override
    {
        return true;
    }
    void listen(Musician &rhs) override
    {
        rhs.play();
        std::cout << "Saxophonist listening! " << std::endl;
    }
};

class Pianist : public Musician
{
public:
    Pianist()
    {
        std::cout << "Pianist Ctor! " << std::endl;
    }
    ~Pianist()
    {
        std::cout << "Pianist Dtor!" << std::endl;
    }

public:
    void play() override
    {
        std::cout << "Pianist play! " << std::endl;
    }
    bool isPlaying() override
    {
        return true;
    }
    void listen(Musician &rhs) override
    {
        rhs.play();
        std::cout << "Pianist is listening! " << std::endl;
    }
};

class Bassist : public Musician
{
public:
    Bassist()
    {
        std::cout << "Bassist Ctor! " << std::endl;
    }
    ~Bassist()
    {
        std::cout << "Bassist Dtor!" << std::endl;
    }

public:
    void play() override
    {
        std::cout << "Bassist play! " << std::endl;
    }
    bool isPlaying() override
    {
        return true;
    }
    void listen(Musician &rhs) override
    {
        rhs.play();
        std::cout << "Bassist is listening! " << std::endl;
    }
};


class Drummer : public Musician
{
public:
    Drummer() { std::cout << "Drummer Ctor!" << std::endl; }
    ~Drummer() { std::cout << "Drummer Dtor!" << std::endl; }

public:
    void play() override
    {
        std::cout << "Drummer play! " << std::endl;
    }
    bool isPlaying() override
    {
        return true;
    }
    void listen(Musician &rhs) override
    {
        rhs.play();
        std::cout << "Drummer is listening! " << std::endl;
    }
};
