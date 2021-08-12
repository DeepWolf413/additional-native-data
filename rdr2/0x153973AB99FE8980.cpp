// abigail2_1.ysc @ L77595
void func_2233(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_A_PED(iParam1))
  {
    iVar0 = 0;
    while (iVar0 < 10)
    {
      if ((STREAMING::IS_MODEL_VALID(cParam0->f_8269.f_2484[iVar0]) && cParam0->f_8269.f_2484[iVar0] == ENTITY::GET_ENTITY_MODEL(iParam1)) || (func_2413(cParam0->f_8269.f_2484[iVar0]) && func_2413(ENTITY::GET_ENTITY_MODEL(iParam1))))
      {
        if (func_2453(sParam2, iVar0))
        {
          if (bParam3)
          {
            AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1, sParam2, 0f);
          }
          else
          {
            AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam1, 0f);
          }
        }
      }
      iVar0++;
    }
  }
}