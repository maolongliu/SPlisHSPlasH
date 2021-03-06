#ifndef __Viscosity_Standard_h__
#define __Viscosity_Standard_h__

#include "SPlisHSPlasH/Common.h"
#include "SPlisHSPlasH/FluidModel.h"
#include "SPlisHSPlasH/NonPressureForceBase.h"

namespace SPH
{
	/** \brief This class implements the standard method for viscosity descibed e.g. by
	* Ihmsen et al. \cite Ihmsen2014.\n\n
	* The method evaluates the term \f$\nu \nabla^2 \mathbf{v}\f$ and uses an approximation 
	* of the kernel Laplacian to improve the stability. This approximation is given in \cite Ihmsen2014.
	*/
	class Viscosity_Standard : public NonPressureForceBase
	{
	public:
		Viscosity_Standard(FluidModel *model);
		virtual ~Viscosity_Standard(void);

		virtual void step();
		virtual void reset();
	};
}

#endif
