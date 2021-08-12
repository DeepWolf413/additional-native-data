// am_hunt_the_beast.ysc @ L68817
void func_284(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
  int iVar0;
  
  FILES::GET_SHOP_PED_PROP(iParam1, &Param2);
  iVar0 = func_207(iParam0, Param2.f_3, Param2.f_4, Param2.f_6);
  if (iVar0 != -99)
  {
    func_69(iParam0, 14, iVar0, 0, -1, 0, 0, 0, -1, -1, iParam19, 0, 0, 0);
    func_69(iParam0, 7, 0, 0, -1, 0, 0, 0, -1, -1, iParam19, 0, 0, 0);
    func_285(425, Param2.f_3, iParam19, 1);
    func_285(434, Param2.f_4, iParam19, 1);
  }
}