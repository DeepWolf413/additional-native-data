// am_mp_submarine.ysc @ L447362
void func_6881(var uParam0, char* sParam1, bool bParam2)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_116) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_116, false))
  {
    iVar0 = 0;
    while (iVar0 < 3)
    {
      if ((uParam0->f_190[iVar0 /*41*/].f_39 == -1 || (uParam0->f_190[iVar0 /*41*/].f_39 == 0 && bParam2)) || (uParam0->f_190[iVar0 /*41*/].f_39 == 1 && bParam2 == 0))
      {
        if (uParam0->f_190[iVar0 /*41*/] == 0)
        {
          GRAPHICS::USE_PARTICLE_FX_ASSET(sParam1);
          if (uParam0->f_190[iVar0 /*41*/].f_40)
          {
            uParam0->f_190[iVar0 /*41*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(&(uParam0->f_190[iVar0 /*41*/].f_7), uParam0->f_116, uParam0->f_190[iVar0 /*41*/].f_1, uParam0->f_190[iVar0 /*41*/].f_4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_116, &(uParam0->f_190[iVar0 /*41*/].f_23)), 1f, false, false, false);
          }
          else
          {
            GRAPHICS::_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(&(uParam0->f_190[iVar0 /*41*/].f_7), uParam0->f_116, uParam0->f_190[iVar0 /*41*/].f_1, uParam0->f_190[iVar0 /*41*/].f_4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_116, &(uParam0->f_190[iVar0 /*41*/].f_23)), 1f, false, false, false);
            uParam0->f_190[iVar0 /*41*/] = 1;
          }
        }
      }
      iVar0++;
    }
  }
}