// abigail2_1.ysc @ L83879
void func_2517(vector3 vParam0)
{
  int iVar0;
  float fVar1;

  iVar0 = 250;
  if (func_685(func_1070(Global_35, 0, 1, 0)) || func_685(func_1070(Global_35, 1, 1, 0)))
  {
    iVar0 = 2000;
  }
  fVar1 = ENTITY::GET_ENTITY_HEADING(Global_35);
  if (!func_386(vParam0))
  {
    fVar1 = func_1302(Global_36, vParam0, 1);
    PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, false, true);
  }
  else
  {
    PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, true, true);
  }
}