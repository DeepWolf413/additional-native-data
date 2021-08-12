// fm_content_tuner_robbery.ysc @ L127993
void func_2533()
{
  int iVar0;
  
  if (func_698(21) || func_767(iLocal_6691, 18))
  {
    return;
  }
  if (func_6(0, 4) || func_957(0, iLocal_6691, 6))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_6777.f_683[0 /*6*/]) && func_665(Local_6777.f_683[0 /*6*/]))
    {
      iVar0 = NETWORK::NET_TO_VEH(Local_6777.f_683[0 /*6*/]);
      ENTITY::IS_ENTITY_DEAD(iVar0, false);
      if (func_3114(47) || ENTITY::GET_ENTITY_SPEED(iVar0) < 0.6f)
      {
        func_2534(iVar0, 1);
        VEHICLE::_0x2FA2494B47FDD009(iVar0, 0);
        ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
        func_697(18);
      }
    }
  }
}