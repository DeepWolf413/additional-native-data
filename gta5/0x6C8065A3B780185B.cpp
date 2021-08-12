// drunk.ysc @ L5230
void func_176()
{
  int iVar0;
  
  bLocal_50 = false;
  if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
  {
    bLocal_50 = true;
    Global_43181 = 1;
    Global_43183++;
  }
  if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
  {
    iVar0 = func_70(Local_43.f_1);
    switch (iVar0)
    {
      case 17:
        AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
        break;
      
      case 19:
        AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
        break;
      }
  }
}