// ambush_inb_forest.ysc @ L9467
bool func_308()
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;

  if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40))
  {
    if (PED::_0x7BB810E8B343AC7B(Global_1935630.f_40))
    {
      return true;
    }
    PED::_0xF60165E1D2C5370B(Global_1935630.f_40, &fVar0, &fVar1);
    fVar2 = MISC::ABSF(fVar0);
    fVar3 = MISC::ABSF(fVar1);
    if (fVar2 > fVar3)
    {
      return true;
    }
    if (fVar1 < 0f)
    {
      return true;
    }
  }
  return false;
}