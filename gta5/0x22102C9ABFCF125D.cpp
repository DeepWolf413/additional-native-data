// am_imp_exp.ysc @ L13339
void func_378()
{
  int iVar0;
  
  if (iLocal_303)
  {
  }
  iVar0 = 0;
  while (iVar0 < 10)
  {
    if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_292[iVar0]))
    {
      VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_292[iVar0]);
    }
    iLocal_292[iVar0] = 0;
    iVar0++;
  }
  iLocal_303 = 0;
}