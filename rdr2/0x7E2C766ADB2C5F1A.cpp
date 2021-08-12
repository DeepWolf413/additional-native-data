// interactive_campfire.ysc @ L35233
void func_1106(var uParam0)
{
  if (func_190(uParam0->f_77, 1147021565) && !func_190(uParam0->f_77, 1919582297))
  {
    if (func_259(uParam0->f_77, 5))
    {
      ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 2);
      DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 1);
      DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
    }
    else
    {
      ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
      DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
      DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 1);
    }
  }
  else
  {
    ATTRIBUTE::_0xD962F8579D702DB5();
    DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
    DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
  }
}