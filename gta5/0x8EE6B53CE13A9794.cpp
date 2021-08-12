// am_boat_taxi.ysc @ L2644
void func_34()
{
  struct<3> Var0;
  var uVar3;
  
  if ((Local_63.f_21 <= 2 || Local_63.f_20 == 2) || Local_63.f_20 == 3)
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
    if ((!WATER::GET_WATER_HEIGHT_NO_WAVES(Var0, &uVar3) || func_36()) || func_35())
    {
      Local_63.f_1 = 4;
    }
  }
}