// beat_outlaw_transport.ysc @ L13097
void func_336()
{
  int iVar0;
  vector3 vVar1;

  if (func_50(iLocal_819, 131072))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_818))
    {
      if (FIRE::IS_ENTITY_ON_FIRE(iLocal_818))
      {
        if (func_36(uLocal_801[6], 0, 1) && !func_50(iLocal_819, 262144))
        {
          vVar1 = { ENTITY::GET_ENTITY_COORDS(uLocal_801[6], true, false) };
          iVar0 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 1.5f);
          if (iVar0 >= 1)
          {
            if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_801[6]))
            {
              FIRE::START_ENTITY_FIRE(uLocal_801[6], 0, -1, 0);
            }
          }
        }
      }
    }
  }
}