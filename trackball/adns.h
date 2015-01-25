
class adns
{
public:
    // The arduino pin number this chip's chip select is tied to.
    int ncs;
        
    // Sets up the chip select for this instance and initializes the chip (upload firmware, etc).
    void init (int chip_select);
    void upload_firmware();
    void com_begin();
    void com_end();

    byte read_reg(byte reg_addr);
    void write_reg(byte reg_addr, byte data);
    
    int read_x();
    int read_y();

    void dispRegisters(void);
};
