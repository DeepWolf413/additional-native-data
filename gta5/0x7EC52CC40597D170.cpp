// hunting2.ysc @ L37128
void func_286()
{
  struct<3> Var0;
  
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
  PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
  if (ENTITY::DOES_ENTITY_EXIST(Local_95[4 /*36*/]))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(Local_95[4 /*36*/], false) };
  }
  if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, false) < 5f)
  {
    Local_676.f_671 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
    func_279(0);
    func_280(1);
    func_277("HT_PHOTO");
    iLocal_2029 = 19;
  }
}