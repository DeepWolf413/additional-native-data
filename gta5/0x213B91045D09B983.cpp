// fm_content_tuner_robbery.ysc @ L128079
int func_2538(int iParam0)
{
  int iVar0;
  
  switch (iParam0)
  {
    case 0:
      if (!func_6(0, 4) && !func_957(0, iLocal_6691, 6))
      {
        if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_6777.f_683[iParam0 /*6*/]))
        {
          iVar0 = NETWORK::NET_TO_VEH(Local_6777.f_683[iParam0 /*6*/]);
          if ((!ENTITY::IS_ENTITY_ATTACHED(iVar0) && ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.2f) && func_2539(ENTITY::GET_ENTITY_ROTATION_VELOCITY(iVar0), 0f, 0f, 0f, 0.1f, 0))
          {
            if (func_15(&(Local_223.f_13), 30000, 0))
            {
              return 1;
            }
          }
          else
          {
            func_28(&(Local_223.f_13));
          }
        }
      }
      break;
  }
  return 0;
}