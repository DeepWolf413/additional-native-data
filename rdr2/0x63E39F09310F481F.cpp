// gang1.ysc @ L40054
void func_893()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 6)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_104[iVar0]))
    {
      OBJECT::_0xF49574E2332A8F06(Local_14.f_104[iVar0], 0.1f);
      OBJECT::_0x63E39F09310F481F(Local_14.f_104[iVar0], 1.75f);
    }
    iVar0++;
  }
}