// am_mp_casino_nightclub.ysc @ L299665
void func_4863()
{
  var uVar0;
  float fVar1;
  int iVar2;
  
  if (MISC::IS_BIT_SET(Local_134, 27))
  {
    if (AUDIO::_0xC64A06D939F826F5(&fVar1, &uVar0, &iVar2))
    {
      if (Local_134.f_2436 != iVar2)
      {
        MISC::SET_BIT(&Local_134, 28);
        Local_134.f_2438 = (fVar1 * 1000f);
        Local_134.f_2436 = iVar2;
      }
      else
      {
        MISC::CLEAR_BIT(&Local_134, 28);
      }
    }
  }
}