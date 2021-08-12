// gb_gunrunning_delivery.ysc @ L130893
void func_1360(int* iParam0, var uParam1)
{
  struct<6> Var0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]))
  {
    if (func_21(uParam1->f_28[0]))
    {
      Var0 = { func_1363(func_1117(uParam1), 2, 0) };
    }
    else
    {
      Var0 = { func_1109(func_1117(uParam1), 2, 0) };
    }
    VEHICLE::_0xDCE97BDF8A0EABC8(uParam1->f_28[0], 0);
    func_1362(&(uParam1->f_28[0]), Var0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
  {
    if (func_21(uParam1->f_1))
    {
      func_1361(&(uParam1->f_1), &(uParam1->f_28[1]));
      if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]))
      {
        VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_28[0], uParam1->f_28[1], 1f);
      }
    }
  }
}