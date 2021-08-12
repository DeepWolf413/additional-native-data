// am_mp_arcade.ysc @ L307883
void func_4832(struct<3> Param0, float fParam3)
{
  if (func_88(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, 0.1f, 0))
  {
    if (!func_4572(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fParam3, 5f))
    {
      TASK::TASK_ACHIEVE_HEADING(PLAYER::PLAYER_PED_ID(), fParam3, 0);
      return;
    }
  }
  else
  {
    TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Param0, 1f, 100, fParam3, 0.1f);
  }
}