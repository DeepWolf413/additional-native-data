// selector.ysc @ L105119
void func_879(int* iParam0)
{
  int iVar0;
  
  func_881(iParam0);
  CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
  PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
  PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 1.75f);
  PED::_0x0B3E35AC043707D9(PLAYER::PLAYER_PED_ID(), 1.75f);
  PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 63, true);
  PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 438, true);
  PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &(iParam0->f_4), -1);
  iVar0 = 0;
  while (iVar0 < iParam0->f_4)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4[iVar0]))
    {
      func_880(iParam0->f_4[iVar0], PLAYER::PLAYER_PED_ID(), 1, 1112014848, 0);
    }
    iVar0++;
  }
}