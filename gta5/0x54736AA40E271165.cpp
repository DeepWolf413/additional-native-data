// am_mp_armory_aircraft.ysc @ L307790
bool func_4996()
{
  struct<4> Var0;
  bool bVar6;
  
  func_4997(Local_1085.f_3, &Var0, 0);
  bVar6 = ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, false, true, 0);
  return bVar6;
}