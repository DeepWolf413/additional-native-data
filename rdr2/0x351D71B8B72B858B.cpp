// shop_horse_shop.ysc @ L63740
bool func_1904(vector3 vParam0, float fParam3, var uParam4)
{
  int iVar0;
  struct<8> Var1;

  if (!VOLUME::_0xA4A4359320345B34(Local_14.f_61))
  {
    Var1 = { vParam0 };
    Var1.f_4 = fParam3;
    Var1.f_6 = -266569170;
    Var1.f_7 = 990081268;
    Local_14.f_61 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
  }
  iVar0 = VOLUME::_0xB33A604345F58202(Local_14.f_61);
  switch (iVar0)
  {
    case 3:
      *uParam4 = VOLUME::_0x351D71B8B72B858B(Local_14.f_61);
      return true;
    case 4:
      Local_14.f_61 = 0;
      return true;
    default:
      break;
  }
  return false;
}