// doc_player_journal.ysc @ L792
void func_5(bool bParam0)
{
  int iVar0;

  if (func_14(Global_35))
  {
    iVar0 = func_15(7);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
    {
      if (bParam0)
      {
        PED::_0xCAC43D060099EA72(iVar0);
      }
      else
      {
        PED::_0xC9151483CC06A414(iVar0);
      }
    }
  }
}