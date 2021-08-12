// act_cinema.ysc @ L4611
void func_119(float fParam0)
{
  if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
  }
  func_83(0f, 1);
}