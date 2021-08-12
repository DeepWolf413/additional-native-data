// am_mp_arcade.ysc @ L11345
int func_136()
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
    if (func_5978(bVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar1))
    {
      iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
      if (ENTITY::DOES_ENTITY_EXIST(iVar2))
      {
        if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 2724.799f, -380.9069f, -49.98798f, 2724.998f, -390.5967f, -47.41036f, 5.75f, false, true, 0))
        {
          return 1;
        }
      }
    }
    bVar0++;
  }
  return 0;
}