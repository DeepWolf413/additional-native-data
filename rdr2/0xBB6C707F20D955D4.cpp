// bjack_sp.ysc @ L9704
void func_319(var uParam0)
{
  if (!uParam0->f_1)
  {
  }
  else
  {
    if (CAM::_0x927B810E43E99932(&(uParam0->f_5)))
    {
      CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_5));
    }
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5.f_17))
    {
      ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_5.f_17));
    }
    if (uParam0->f_4 != 0)
    {
      if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && CAM::_0xD1BA66940E94C547())
      {
        GRAPHICS::_0xBB6C707F20D955D4(5f);
      }
      else
      {
        GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
      }
    }
    func_797(&(uParam0->f_32));
    uParam0->f_1 = 0;
    uParam0->f_2 = 1;
    uParam0->f_3 = 0;
    uParam0->f_4 = 0;
  }
}