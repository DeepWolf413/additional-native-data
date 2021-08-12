// rcm_gunslinger5_1.ysc @ L12235
void func_420(bool bParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= (14 - 1))
  {
    func_879(&(Local_589[iVar0 /*6*/]), bParam0);
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 <= (9 - 1))
  {
    if (PHYSICS::DOES_ROPE_EXIST(Local_690[iVar0 /*25*/].f_24))
    {
      if (bParam0)
      {
        PHYSICS::DELETE_ROPE(&(Local_690[iVar0 /*25*/].f_24));
      }
      else
      {
        PHYSICS::_0x6076213101A47B3B(&(Local_690[iVar0 /*25*/].f_24));
      }
    }
    func_879(&(Local_690[iVar0 /*25*/]), bParam0);
    func_880(&(Local_690[iVar0 /*25*/].f_13.f_5), 1, 1);
    ENTITY::_0xD2B9C78537ED5759(Local_690[iVar0 /*25*/].f_6);
    iVar0++;
  }
}