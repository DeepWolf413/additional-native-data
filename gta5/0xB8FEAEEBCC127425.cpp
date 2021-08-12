// business_battles.ysc @ L257444
void func_3992()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < func_1245(func_3718(), func_465()))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409.f_1110[iVar0]))
    {
      if (func_1243(func_1244(iVar0, func_3718(), func_465())))
      {
        GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(NETWORK::NET_TO_ENT(uLocal_2409.f_1110[iVar0]));
      }
      if (func_3993(iVar0))
      {
        if (func_1251(uLocal_2409.f_1110[iVar0]))
        {
          func_1301(&(uLocal_2409.f_1110[iVar0]));
        }
      }
      else
      {
        func_696(&(uLocal_2409.f_1110[iVar0]));
      }
    }
    iVar0++;
  }
}