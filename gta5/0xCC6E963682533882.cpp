// director_mode.ysc @ L141611
void func_1051()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 50)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_9401[iVar0 /*13*/].f_11))
    {
      iVar1 = func_8(Local_9401[iVar0 /*13*/]);
      if (!Local_395[iVar1 /*15*/].f_6)
      {
        ENTITY::FREEZE_ENTITY_POSITION(Local_9401[iVar0 /*13*/].f_11, false);
        PHYSICS::ACTIVATE_PHYSICS(Local_9401[iVar0 /*13*/].f_11);
      }
      ENTITY::SET_ENTITY_INVINCIBLE(Local_9401[iVar0 /*13*/].f_11, false);
      ENTITY::SET_ENTITY_PROOFS(Local_9401[iVar0 /*13*/].f_11, false, false, false, false, false, false, false, false);
      ENTITY::SET_ENTITY_COLLISION(Local_9401[iVar0 /*13*/].f_11, true, false);
      if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_9401[iVar0 /*13*/].f_11) && PHYSICS::_GET_HAS_OBJECT_FRAG_INST(Local_9401[iVar0 /*13*/].f_11))
      {
        PHYSICS::_0xCC6E963682533882(Local_9401[iVar0 /*13*/].f_11);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(Local_9401[iVar0 /*13*/].f_11, false);
      }
    }
    iVar0++;
  }
}