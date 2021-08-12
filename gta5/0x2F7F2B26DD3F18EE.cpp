// fm_mission_controller.ysc @ L850997
void func_14335(struct<3> Param0)
{
  float fVar0;
  struct<3> Var1;
  
  if (func_197(PLAYER::PLAYER_ID(), 1, 1))
  {
    Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Param0) };
    fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
    CAM::_0x2F7F2B26DD3F18EE(-180f, 180f);
  }
}