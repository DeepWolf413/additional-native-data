// abigail1.ysc @ L34608
void func_233(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
  struct<3> Var0;
  var uVar3;
  
  if (ENTITY::DOES_ENTITY_EXIST(Global_102858.f_4))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_102858.f_4, false))
    {
      if (func_281(24) != Global_102858.f_4)
      {
        if (iParam4 == 1)
        {
          if (func_278(ENTITY::GET_ENTITY_COORDS(Global_102858.f_4, true), iParam5, &Var0, &uVar3))
          {
            Param0 = { Var0 };
            fParam3 = uVar3;
          }
        }
        func_234(Global_102858.f_4, Param0, fParam3, 24, 0);
      }
    }
  }
}