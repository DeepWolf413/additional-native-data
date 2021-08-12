// barry3.ysc @ L36853
void func_289()
{
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && func_350(iLocal_147))
  {
    PED::SET_IK_TARGET(iLocal_147, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
    PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_147, 31086, 0f, 0f, 0f, 0, -1, -1);
  }
}