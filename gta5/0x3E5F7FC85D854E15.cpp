// paparazzo1.ysc @ L58041
void func_629()
{
  if (!iLocal_3184)
  {
    if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
    {
      func_394("PAP1_H2", 1);
      if (MISC::IS_PC_VERSION())
      {
        func_394("PAP1_H2_KM", 1);
      }
      iLocal_3184 = 1;
    }
  }
}