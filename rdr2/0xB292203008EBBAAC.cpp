// medium_update.ysc @ L52729
void func_1625(int iParam0, int iParam1)
{
  int iVar0;

  iVar0 = -1406986790;
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return;
  }
  iVar0 = PED::_0xB292203008EBBAAC(iParam1);
  if (iVar0 == 788161705)
  {
    StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0840_S_M_M_MarketVendor_01_BLACK_01", 64);
  }
  else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) >= 2)
  {
    StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
  }
  else
  {
    StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0839_S_M_M_MarketVendor_01_WHITE_02", 64);
  }
}