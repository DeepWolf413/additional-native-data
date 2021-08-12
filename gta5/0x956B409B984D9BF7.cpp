// fm_race_creator.ysc @ L440195
void func_6984(int iParam0)
{
  struct<2> Var0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
  {
    if (func_48(Var0.f_1, 0, 1))
    {
      Global_2453903.f_3844[Var0.f_1] = VEHICLE::DOES_VEHICLE_EXIST_WITH_DECORATOR("BeforeCorona");
      if (ENTITY::DOES_ENTITY_EXIST(Global_2453903.f_3844[Var0.f_1]))
      {
        if (func_6986(Var0.f_1, Global_2453903.f_3844[Var0.f_1]))
        {
          func_6985(Var0.f_1, 1);
        }
        else
        {
          func_6985(Var0.f_1, 2);
        }
      }
      else
      {
        func_6985(Var0.f_1, 2);
      }
    }
    else
    {
      func_6985(Var0.f_1, 2);
    }
    MISC::SET_BIT(&(Global_2453903.f_3877), Var0.f_1);
  }
}